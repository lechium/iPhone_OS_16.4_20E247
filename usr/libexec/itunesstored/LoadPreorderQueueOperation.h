//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber;

@interface LoadPreorderQueueOperation : ISOperation
{
    NSNumber *_accountID;	// 96 = 0x60
    NSArray *_items;	// 104 = 0x68
}

- (id)_newURLOperation;	// IMP=0x002000000010baed
- (void)run;	// IMP=0x001000000010b478
@property(readonly) NSArray *preorderItems;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;	// IMP=0x001000000010b3ad
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x001000000010b356

@end
