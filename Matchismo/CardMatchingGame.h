//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Vitaly Kondratiev on 06/05/2014.
//  Copyright (c) 2014 AppFocused. All rights reserved.
//

@import Foundation;
#import "Deck.h"

@interface CardMatchingGame : NSObject

// designated initialiser
- (instancetype)initWithCardCount:(NSUInteger)count
                        usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end
