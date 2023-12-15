from django.db import models
from django.contrib.auth.models import User

class Product(models.Model):
    name = models.CharField(max_length=200)
    description = models.TextField()
    # max_digits represent total number of digits before decimal point and decimal_places represent number of digits after decimal point
    price = models.DecimalField(max_digits=10, decimal_places=2) # 120.65
    def __str__(self):
        return self.name

class ProductReview(models.Model):
    product = models.ForeignKey(Product, on_delete=models.CASCADE, related_name='reviews') # one product have multiple reviews, related_name represent reverse relationship, where we can access all reviews of a product using related_name.
    user = models.ForeignKey(User, on_delete=models.CASCADE) # multiple user can give review for a product ForeignKey represent one to many relationship
    rating = models.IntegerField(choices=[(i, i) for i in range(1, 6)]) # first i represent value for db and second i represent value for user
    review = models.TextField()
    created_at = models.DateTimeField(auto_now_add=True) # obj kkhn toiri hoiche setar time save korbe
    updated_at = models.DateTimeField(auto_now=True) # user jkhn review edit korbe tokhn updated time ta dekhabe
    class Meta:
        unique_together = ('product', 'user')  # one user can give one review for one product. uinique_together represent multiple field should be unique together. it is by default django validation. we can also use it in serializer.py file for validation. ex: validators=[UniqueTogetherValidator(queryset=ProductReview.objects.all(), fields=['product', 'user'])]
        
    def __str__(self):
        return f"{self.user.username} - {self.product.name} - Rating: {self.rating}"
