//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSync/_TtC8MapsSync19MapsSyncHistoryItem.h>

@class NSDate, NSString;

@interface _TtC8MapsSync19MapsSyncHistoryItem (HistoryEntryRecentsItem)
+ (id)mutableObjectProtocol;	// IMP=0x002000000069aae2
+ (Class)mutableObjectClass;	// IMP=0x001000000069aad1
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x002000000069ab24
@property(readonly, nonatomic) _Bool tracksRAPReportingOnly;
- (_Bool)isFailed;	// IMP=0x001000000069ab14
- (_Bool)isUserVisibleDuplicateOfEntry:(id)arg1;	// IMP=0x001000000069ab02
@property(readonly, copy, nonatomic) NSDate *usageDate;
- (void)ifSearch:(CDUnknownBlockType)arg1 ifRoute:(CDUnknownBlockType)arg2 ifPlaceDisplay:(CDUnknownBlockType)arg3 ifTransitLineItem:(CDUnknownBlockType)arg4;	// IMP=0x001000000069aaea
- (id)mutableCopy;	// IMP=0x001000000069aac6
- (id)storageIdentifier;	// IMP=0x001000000069aab4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

