//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSObject-Protocol.h>

@class EMSearchableIndexQueryExpression;

@protocol EDSearchableCriterion <NSObject>
@property(readonly, nonatomic, getter=isFullTextSearchableCriterion) _Bool fullTextSearchableCriterion;
- (EMSearchableIndexQueryExpression *)spotlightQueryExpression;
@end
