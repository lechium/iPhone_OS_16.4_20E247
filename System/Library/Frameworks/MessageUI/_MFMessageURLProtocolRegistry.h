//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _MFMessageURLProtocolRegistry : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_storage;	// 16 = 0x10
}

+ (id)sharedRegistry;	// IMP=0x00600000000e9215
- (void).cxx_destruct;	// IMP=0x00000000000e9507
@property(readonly, nonatomic) NSMapTable *storage; // @synthesize storage=_storage;
- (id)contentRepresentationForURL:(id)arg1;	// IMP=0x00000000000e9471
- (void)registerContentRepresentation:(id)arg1;	// IMP=0x00000000000e9325
- (id)init;	// IMP=0x00000000000e929a

@end

