//
//  Card.h
//  Matchismo
//
//  Created by Vitaly Kondratiev on 05/05/2014.
//  Copyright (c) 2014 AppFocused. All rights reserved.
//

@import Foundation;

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
