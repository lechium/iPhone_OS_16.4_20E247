//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RMMigrationSystemContainer : NSObject
{
}

- (_Bool)_moveDirectory:(id)arg1 fromURL:(id)arg2 toURL:(id)arg3 error:(id *)arg4;	// IMP=0x002000000005ddb8
- (_Bool)_migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005db7c
- (_Bool)_directoryExistsAtURL:(id)arg1;	// IMP=0x001000000005dacc
- (_Bool)_okToMigrateFromURL:(id)arg1 toURL:(id)arg2;	// IMP=0x001000000005d978
- (_Bool)executeReturningError:(id *)arg1;	// IMP=0x001000000005d850
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

