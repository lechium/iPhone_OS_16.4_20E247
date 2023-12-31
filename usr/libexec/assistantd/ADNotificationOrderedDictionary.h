//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFLinkedListItem, NSMutableDictionary;

@interface ADNotificationOrderedDictionary : NSObject
{
    NSMutableDictionary *_allBulletins;	// 8 = 0x8
    AFLinkedListItem *_orderedBulletinsHead;	// 16 = 0x10
    AFLinkedListItem *_orderedBulletinsTail;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002bab43
- (void);	// IMP=0x00100000002baab8
- (id)appendItemWithBulletin:(id)arg1;	// IMP=0x00100000002baa27
- (void)enumerateBulletinsAfterBulletinWithNotificationID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002ba8d0
- (void)removeBulletinWithInternalID:(id)arg1;	// IMP=0x00100000002ba84d
- (void)setBulletin:(id)arg1 forInternalID:(id)arg2;	// IMP=0x00100000002ba783
- (id)allBulletins;	// IMP=0x00100000002ba5be
- (id)bulletinWithNotificationID:(id)arg1;	// IMP=0x00100000002ba4a0
- (id)bulletinForInternalID:(id)arg1;	// IMP=0x00100000002ba44c
- (id)init;	// IMP=0x00100000002ba3f6

@end

