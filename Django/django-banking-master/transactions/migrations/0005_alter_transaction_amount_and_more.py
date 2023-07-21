# Generated by Django 4.2 on 2023-06-10 12:13

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('transactions', '0004_alter_transaction_balance_after_transaction'),
    ]

    operations = [
        migrations.AlterField(
            model_name='transaction',
            name='amount',
            field=models.DecimalField(decimal_places=2, max_digits=12, null=True),
        ),
        migrations.AlterField(
            model_name='transaction',
            name='balance_after_transaction',
            field=models.DecimalField(decimal_places=2, max_digits=12, null=True),
        ),
    ]
