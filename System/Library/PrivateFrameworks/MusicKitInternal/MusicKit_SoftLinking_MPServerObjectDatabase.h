//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPServerObjectDatabase;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPServerObjectDatabase : NSObject
{
    MPServerObjectDatabase *_underlyingServerObjectDatabase;	// 8 = 0x8
}

+ (id)sharedServerObjectDatabase;	// IMP=0x0040000000009eea
- (void).cxx_destruct;	// IMP=0x000000000000a6cb
- (id)payloadDataForIdentifier:(id)arg1 identifierKinds:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000000a132
- (id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000000a08e
- (id)_initWithUnderlyingServerObjectDatabase:(id)arg1;	// IMP=0x000000000000a023

@end

