//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemStorage;
@protocol GEOMapItem, NSObject;

__attribute__((visibility("hidden")))
@interface _GEOMapItemStorageNotificationTrampoline : NSObject
{
    id <GEOMapItem> _mapItem;	// 8 = 0x8
    GEOMapItemStorage *_storage;	// 16 = 0x10
    id <NSObject> _notificationToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000e38bb5
- (void)dealloc;	// IMP=0x0000000000e38b34
- (id)initWithMapItem:(id)arg1 mapItemStorage:(id)arg2;	// IMP=0x0000000000e388f6

@end

