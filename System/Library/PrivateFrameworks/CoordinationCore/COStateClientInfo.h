//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface COStateClientInfo : NSObject
{
    NSDictionary *_state;	// 8 = 0x8
    NSDictionary *_observers;	// 16 = 0x10
    _Bool _disconnected;	// 24 = 0x18
    NSString *_suite;	// 32 = 0x20
    NSSet *_clusters;	// 40 = 0x28
    long long _outstandingWriteCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000050b9d
@property(nonatomic) _Bool disconnected; // @synthesize disconnected=_disconnected;
@property(nonatomic) long long outstandingWriteCount; // @synthesize outstandingWriteCount=_outstandingWriteCount;
@property(readonly, copy, nonatomic) NSSet *clusters; // @synthesize clusters=_clusters;
@property(readonly, copy, nonatomic) NSString *suite; // @synthesize suite=_suite;
@property(readonly, copy, nonatomic) NSDictionary *state; // @dynamic state;
@property(readonly, copy, nonatomic) NSDictionary *observers; // @dynamic observers;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000050b3c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000050ab1
- (id)stateForCluster:(id)arg1;	// IMP=0x0000000000050a9b
- (id)initWithSuite:(id)arg1 clusters:(id)arg2;	// IMP=0x00000000000509cd

@end

