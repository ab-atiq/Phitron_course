# Generated by Django 4.2 on 2023-06-15 03:27

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('search', '0003_remove_district_parent_district_and_more'),
    ]

    operations = [
        migrations.AlterField(
            model_name='district',
            name='parent_districts',
            field=models.ManyToManyField(blank=True, to='search.district'),
        ),
    ]