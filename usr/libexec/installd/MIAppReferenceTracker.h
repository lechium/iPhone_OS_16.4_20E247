//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MIAppReferenceTracker : NSObject
{
    unsigned long long _domain;	// 8 = 0x8
}

+ (id)managerForInstallationDomain:(unsigned long long)arg1;	// IMP=0x0040000000049858
@property(readonly, nonatomic) unsigned long long domain; // @synthesize domain=_domain;
- (void)enumerateAppReferencesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049c68
- (_Bool)revokeTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000049bfe
- (_Bool)finalizeTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000049b94
- (id)addTemporaryReferenceForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000049b2a
- (_Bool)removeReferenceForIdentity:(id)arg1 waitingForSpaceReclaimation:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000049ac0
- (_Bool)addReferenceForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000049a56
- (_Bool)referenceExists:(_Bool *)arg1 forIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000499ec
- (id)initForInstallationDomain:(unsigned long long)arg1;	// IMP=0x00100000000499af

@end

