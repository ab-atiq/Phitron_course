from django.contrib import admin
from django.urls import path
from book.views import home, store_book, show_book, edit_book, delete_book, TemplateView, TemplateBaseView, BookListView, DetailBookViews, StoreBookClass, UpdateBookView, DeleteBookView

urlpatterns = [
    path('', home, name='home'),
    path('temp1/', TemplateView.as_view(template_name="home_temp1.html"), {"author":"Atiqur Rahman"}, name='temp1'),
    path('temp2/', TemplateBaseView.as_view(),{"data":"URL Data Set"}, name='temp2'),
    path('temp2/<str:text>', TemplateBaseView.as_view(), name='temp2'),
    path('store_book/',store_book, name='storeBook'),
    path('store_book_class/',StoreBookClass.as_view(), name='storeBookClass'),
    path('store_book_class2/',StoreBookClass.as_view(), name='storeBookClass2'),
    path('show_book/',show_book, name='showbook'),
    path('show_book_class/',BookListView.as_view(), name='showbookclass'),
    path('show_book_class/<int:id>',DetailBookViews.as_view(), name='showbookclassdetails'),
    path('edit/<int:id>',edit_book, name='edit'),
    path('edit_book_class/<int:id>',UpdateBookView.as_view(), name='editbookclass'),
    path('delete/<int:id>',delete_book,name='deletebook'),
    path('delete_book_class/<int:id>',DeleteBookView.as_view(),name='deletebookclass'),
]