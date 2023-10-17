//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDState;
@protocol OS_dispatch_queue;

@interface MDAnnouncementsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_announcementsQueue;	// 8 = 0x8
    MDState *_state;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001c00b
- (_Bool)_pointInPolygon:(struct CLLocationCoordinate2D)arg1 polygonPoints:(struct CLLocationCoordinate2D *)arg2 numberOfPolygonPoints:(unsigned long long)arg3;	// IMP=0x001000000001bf32
- (id)_announcementsURLPath;	// IMP=0x001000000001b778
- (id)_getAnnouncementWithID:(id)arg1 announcementID:(id)arg2;	// IMP=0x001000000001b5a1
- (id)_announcementsFromDisk;	// IMP=0x001000000001b4ff
- (_Bool)_announcementRegionContainsCoordinate:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;	// IMP=0x001000000001b1ea
- (id)_announcementsFilePath;	// IMP=0x001000000001b168
- (_Bool)_announcementsDocumentNeedsUpdate:(id)arg1 announcementsURL:(id)arg2;	// IMP=0x001000000001b047
- (void)_updateAnnouncementIfNecessary:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a349
- (void)_updateAnnouncementsDocumentFromURL:(id)arg1 announcementsFromDisk:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000199a4
- (void)update:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019814
- (void)reset;	// IMP=0x00100000000194be
- (void)clearCurrentAnnouncement;	// IMP=0x0010000000019390
- (void)fetchActiveAnnouncement:(CDUnknownBlockType)arg1;	// IMP=0x001000000001914d
- (id)initWithState:(id)arg1;	// IMP=0x001000000001909c

@end
