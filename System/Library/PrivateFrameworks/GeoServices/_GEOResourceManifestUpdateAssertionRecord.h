//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestUpdateAssertionRecord : NSObject
{
    NSString *_process;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    double _creationTimestamp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000b627cf
@property(readonly, nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *process; // @synthesize process=_process;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3;	// IMP=0x0000000000b62641
- (id)init;	// IMP=0x0000000000b62617

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
