# Generated by Django 4.2 on 2023-06-13 13:22

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='GraphNode',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=100)),
                ('neighbors', models.ManyToManyField(blank=True, to='search.graphnode')),
            ],
        ),
    ]
