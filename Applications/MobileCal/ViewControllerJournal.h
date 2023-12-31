//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSEnumerator, NSMutableArray;

@interface ViewControllerJournal : NSObject
{
    NSMutableArray *_journal;	// 8 = 0x8
    NSEnumerator *_journalEnumerator;	// 16 = 0x10
    NSEnumerator *_currentLayerEnumerator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000aa59b
- (_Bool)isEmpty;	// IMP=0x00100000000aa57e
- (id)nextJournaledViewController;	// IMP=0x00100000000aa363
- (void)addPresentedViewController:(id)arg1 withPresenter:(id)arg2;	// IMP=0x00100000000aa2ce
- (void)addPushedViewController:(id)arg1 withPresenter:(id)arg2;	// IMP=0x00100000000aa1b2
- (id)insertNewLayer;	// IMP=0x00100000000aa177
- (id)description;	// IMP=0x00100000000aa0f1
- (id)init;	// IMP=0x00100000000aa08b

@end

