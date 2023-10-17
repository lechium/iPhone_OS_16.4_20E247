//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncItem, NSDictionary, NSString, NSUUID;

@interface _ADDeviceSyncItemMutation : NSObject
{
    ADDeviceSyncItem *_base;	// 8 = 0x8
    NSUUID *_UUID;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasUUID:1;
        unsigned int hasProperties:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000269364
- (void)setProperties:(id)arg1;	// IMP=0x0010000000269344
- (id)getProperties;	// IMP=0x001000000026930c
- (void)setUUID:(id)arg1;	// IMP=0x00100000002692ec
- (id)getUUID;	// IMP=0x00100000002692b4
- (_Bool)isDirty;	// IMP=0x00100000002692a9
- (id)initWithBase:(id)arg1;	// IMP=0x001000000026923e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
