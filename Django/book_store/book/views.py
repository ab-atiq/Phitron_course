from typing import Any
from django.db.models.query import QuerySet
from django.shortcuts import render, redirect
'''two way of import file. 
1st way: book.forms. 
2nd way: .forms'''
from book.forms import BookStoreForm
from .models import BookStoreModel
from django.views.generic import TemplateView, ListView, DetailView
from django.views.generic.edit import FormView, CreateView, UpdateView, DeleteView
from django.urls import reverse_lazy

'''Function Base view'''
def home(request):
    return render(request, 'home.html')

'''Class Base view'''
class TemplateBaseView(TemplateView):
    template_name = "home_temp2.html"
    def get_context_data(self, **kwargs: Any) -> dict[str, Any]:
        context = super().get_context_data(**kwargs)
        context = {
            "author": "Atiqur Rahman",
            "age": 25,
            "country": "Bangladesh"
        }
        print(kwargs)
        context.update(kwargs)
        return context

''' This function will store the book in database'''''
def store_book(request):
    if request.method == 'POST':
        book = BookStoreForm(request.POST)
        if book.is_valid():
            book.save(commit=True)
            print(book.cleaned_data)
            return redirect('showbook')
    else:
        book = BookStoreForm() 
        return render(request, "store_book.html", {'form':book})

'''1st method: Class Base view for store book'''
class StoreBookClass(FormView):
    template_name = "store_book_class.html"
    form_class = BookStoreForm
    # success_url = '/show_book_class/'
    # success_url = reverse_lazy('showbookclass')
    
    def form_valid(self, form):
        print(form.cleaned_data)
        form.save(commit=True)
        return redirect('showbookclass')

'''2nd method: Class Base view for store book'''
class StoreBookClass2(CreateView):
    model = BookStoreModel
    template_name = "store_book_class.html"
    form_class = BookStoreForm
    success_url = reverse_lazy('showbookclass')

''' This function will show the books from database'''
def show_book(request):
    book = BookStoreModel.objects.all()
    print(book)
    return render(request, 'show_book.html',{'book':book})

'''Show books using class base view'''
class BookListView(ListView):
    model = BookStoreModel
    template_name = 'show_book_class.html'
    context_object_name = 'booklist'
    ordering = ['author']
    
    '''filter data from database base on author name'''
    def get_queryset(self) -> QuerySet[Any]:
        # return BookStoreModel.objects.filter(author='Atiqur Rahman')
        return BookStoreModel.objects.filter(id=3)
    
    '''Data pass from backend to frontend'''
    def get_context_data(self, **kwargs: Any) -> dict[str, Any]:
        context = super().get_context_data(**kwargs)
        '''If we pass data like this then we have to use {{ atiqur }} in html file to get data. It will override context_object_name and ordering'''
        # context = {"atiqur": BookStoreModel.objects.filter(author='Atiqur Rahman')}
        context = {"atiqur": BookStoreModel.objects.all().order_by('-id')}
        return context
    
    '''Template show base on user type'''
    def get_template_names(self) -> list[str]:
        if self.request.user.is_superuser:
            template_name = 'template_for_superuser.html'
        if self.request.user.is_staff:
            template_name = 'template_for_staff.html'
        else:
            template_name = 'template_for_user.html'
        return [template_name]
    
'''Show single book details using class base view'''
class DetailBookViews(DetailView):
    model = BookStoreModel
    template_name = 'show_book_class_details.html'
    context_object_name = 'bookdetails'
    pk_url_kwarg = 'id'
    
'''edit / update single book using form into database'''
def edit_book(request, id):
    book = BookStoreModel.objects.get(pk=id)
    
    if request.method == 'POST':
        form = BookStoreForm(request.POST, instance=book)
        if form.is_valid():
            form.save()
            return redirect('showbook')
    else:
        form = BookStoreForm(instance=book)
        return render(request, 'store_book.html', {'form':form})
    
'''edit / update single book using class base view into database'''
class UpdateBookView(UpdateView):
    model = BookStoreModel
    template_name = 'store_book_class.html'
    form_class = BookStoreForm
    success_url = reverse_lazy('showbookclass')
    pk_url_kwarg = 'id'
    
'''delete single book from database'''
def delete_book(request, id):
    book = BookStoreModel.objects.get(pk=id).delete()
    return redirect('showbook')

'''delete single book from database using class base view'''
class DeleteBookView(DeleteView):
    model = BookStoreModel
    template_name = 'delete_confirmation_page.html'
    success_url = reverse_lazy('showbookclass')
    pk_url_kwarg = 'id'