# Generated by Django 5.0 on 2023-12-14 02:41

import django.db.models.deletion
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('first', '0002_studentdata'),
    ]

    operations = [
        migrations.RenameField(
            model_name='studentdata',
            old_name='age',
            new_name='roll',
        ),
        migrations.RemoveField(
            model_name='studentdata',
            name='marks',
        ),
        migrations.CreateModel(
            name='Course',
            fields=[
                ('course_id', models.IntegerField(primary_key=True, serialize=False)),
                ('name', models.CharField(max_length=255)),
                ('marks', models.IntegerField()),
                ('student', models.ForeignKey(default=None, on_delete=django.db.models.deletion.CASCADE, related_name='course', to='first.studentdata')),
            ],
        ),
    ]
