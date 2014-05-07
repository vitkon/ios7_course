//
//  Deck.h
//  Matchismo
//
//  Created by Vitaly Kondratiev on 05/05/2014.
//  Copyright (c) 2014 AppFocused. All rights reserved.
//

@import Foundation;
#import "Card.h"

@interface Deck : NSObject

- (void) addCard:(Card *)card atTop:(BOOL)atTop;
- (void) addCard:(Card *)card;
- (Card *) drawRandomCard;

@end
