from django.contrib import admin
from .models import BookStoreModel

# Register your models here.

# This line of code will show only objects
# admin.site.register(BookStoreModel)

# This line of code will show all fields in display
class BookStoreModelAdmin(admin.ModelAdmin):
    list_display = ('id','book_name', 'author', 'category', 'first_pub', 'last_pub')
admin.site.register(BookStoreModel, BookStoreModelAdmin)