# Generated by Django 4.2.2 on 2023-07-22 13:53

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('book', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='bookstoremodel',
            name='category',
            field=models.CharField(choices=[('Mystery', 'Mystery'), ('Humor', 'Humor'), ('Horor', 'Horor'), ('Thriller', 'Thriller'), ('Sci-Fi', 'Sci-Fi')], max_length=30),
        ),
        migrations.AlterField(
            model_name='bookstoremodel',
            name='last_pub',
            field=models.DateTimeField(auto_now=True),
        ),
    ]
