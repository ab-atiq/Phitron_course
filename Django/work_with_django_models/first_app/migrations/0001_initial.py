# Generated by Django 4.2.2 on 2023-07-22 06:31

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Student',
            fields=[
                ('name', models.CharField(max_length=20)),
                ('roll', models.IntegerField(primary_key=True, serialize=False)),
                ('address', models.TextField()),
                ('father_name', models.TextField(default='Atiq')),
            ],
        ),
    ]