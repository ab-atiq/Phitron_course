from django.contrib import admin
from django.urls import path
from book.views import home, store_book, show_book, edit_book, delete_book
urlpatterns = [
    path('', home, name='home'),
    path('store_book/',store_book, name='storeBook'),
    path('show_book/',show_book, name='showbook'),
    path('edit/<int:id>',edit_book, name='edit'),
    path('delete/<int:id>',delete_book,name='deletebook')
]