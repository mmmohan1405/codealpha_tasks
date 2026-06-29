#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_QUOTES 20

struct Quote
{
    char text[300];
    char author[100];
};

void displayHeader()
{
    printf("\n=====================================================\n");
    printf("               RANDOM QUOTE GENERATOR\n");
    printf("=====================================================\n");
}

void displayQuote(struct Quote quotes[], int index)
{
    printf("\nQuote:\n");
    printf("\"%s\"\n", quotes[index].text);
    printf("\n- %s\n", quotes[index].author);
}

int generateRandomQuote(int previousIndex)
{
    int index;

    do
    {
        index = rand() % TOTAL_QUOTES;
    }
    while(index == previousIndex);

    return index;
}

int main()
{
    struct Quote quotes[TOTAL_QUOTES] =
    {
        {"Success is not final, failure is not fatal: it is the courage to continue that counts.", "Winston Churchill"},
        {"Believe you can and you're halfway there.", "Theodore Roosevelt"},
        {"The future depends on what you do today.", "Mahatma Gandhi"},
        {"Dream big and dare to fail.", "Norman Vaughan"},
        {"Do what you can with all you have, wherever you are.", "Theodore Roosevelt"},
        {"It always seems impossible until it's done.", "Nelson Mandela"},
        {"Your time is limited, so don't waste it living someone else's life.", "Steve Jobs"},
        {"Everything you've ever wanted is on the other side of fear.", "George Addair"},
        {"The best way to get started is to quit talking and begin doing.", "Walt Disney"},
        {"Don't watch the clock; do what it does. Keep going.", "Sam Levenson"},
        {"Hard work beats talent when talent doesn't work hard.", "Tim Notke"},
        {"Opportunities don't happen. You create them.", "Chris Grosser"},
        {"If you can dream it, you can do it.", "Walt Disney"},
        {"Quality is not an act, it is a habit.", "Aristotle"},
        {"Stay hungry, stay foolish.", "Steve Jobs"},
        {"Action is the foundational key to all success.", "Pablo Picasso"},
        {"Push yourself because no one else is going to do it for you.", "Unknown"},
        {"Small daily improvements lead to stunning results.", "Robin Sharma"},
        {"The harder you work for something, the greater you'll feel when you achieve it.", "Unknown"},
        {"Great things never come from comfort zones.", "Unknown"}
    };

    int choice;
    int previousIndex = -1;
    int currentIndex;
    int totalViewed = 0;

    srand((unsigned int)time(NULL));

    while(1)
    {
        displayHeader();

        printf("\n1. Show Random Quote");
        printf("\n2. View Statistics");
        printf("\n3. Exit");
        printf("\n\nEnter your choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                currentIndex = generateRandomQuote(previousIndex);

                displayHeader();
                displayQuote(quotes, currentIndex);

                previousIndex = currentIndex;
                totalViewed++;

                printf("\nTotal Quotes Viewed: %d\n", totalViewed);
                break;

            case 2:
                displayHeader();

                printf("\nApplication Statistics\n");
                printf("----------------------\n");
                printf("Total Quotes Available : %d\n", TOTAL_QUOTES);
                printf("Total Quotes Viewed    : %d\n", totalViewed);

                if(totalViewed == 0)
                    printf("Most Recent Quote      : None\n");
                else
                    printf("Most Recent Quote      : #%d\n", previousIndex + 1);

                break;

            case 3:
                displayHeader();
                printf("\nThank you for using Random Quote Generator!\n");
                printf("Goodbye.\n");
                return 0;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

        printf("\nPress Enter to continue...");
        getchar();
        getchar();
    }

    return 0;
}