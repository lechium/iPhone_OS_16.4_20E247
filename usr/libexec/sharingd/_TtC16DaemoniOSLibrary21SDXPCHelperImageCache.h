//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _TtC16DaemoniOSLibrary21SDXPCHelperImageCache : NSObject
{
}

+ (long long)cacheCount;	// IMP=0x00200000002a1c00
+ (struct CGImage *)imageForKey:(id)arg1 contactIDs:(id)arg2;	// IMP=0x00100000002a1500
+ (_Bool)cacheIsEmpty;	// IMP=0x00100000002a0fb0
+ (void)setImage:(struct CGImage *)arg1 forKey:(id)arg2 contactIDs:(id)arg3;	// IMP=0x00100000002a0e60
+ (void)evictWithContactIdentifier:(id)arg1;	// IMP=0x00100000002a09a0
+ (void)purgeAvatars;	// IMP=0x001000000029fa60
+ (void)clearCacheWithSync:(_Bool)arg1;	// IMP=0x001000000029f720
- (id)init;	// IMP=0x00400000002a1c90

@end

