//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface NanoRoutePlanningResponseSnapshot : NSObject
{
    NSDate *_timestamp;	// 8 = 0x8
    NSArray *_routeIdentifiers;	// 16 = 0x10
    NSArray *_revisionIdentifiers;	// 24 = 0x18
    NSUUID *_selectedRouteIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000002485
@property(copy, nonatomic) NSUUID *selectedRouteIdentifier; // @synthesize selectedRouteIdentifier=_selectedRouteIdentifier;
@property(copy, nonatomic) NSArray *revisionIdentifiers; // @synthesize revisionIdentifiers=_revisionIdentifiers;
@property(copy, nonatomic) NSArray *routeIdentifiers; // @synthesize routeIdentifiers=_routeIdentifiers;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)deltaFromSnapshot:(id)arg1;	// IMP=0x0010000000001f38
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000001ddd
- (id)init;	// IMP=0x0010000000001d77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
