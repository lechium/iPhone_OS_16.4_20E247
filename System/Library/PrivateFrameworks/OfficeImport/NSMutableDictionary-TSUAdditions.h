//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (TSUAdditions)
+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;	// IMP=0x006000000027ff6b
+ (id)tsu_dictionaryByInvertingDictionaryIfPossible:(id)arg1;	// IMP=0x006000000027fe1a
- (id)tsu_objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;	// IMP=0x001000000027fdb5
- (id)tsu_objectForKey:(id)arg1 withDefaultUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000027fd60
- (void)tsu_setNonNilObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000002a0877
- (void)tsu_setNonNilValueForKey:(id)arg1 fromDictionary:(id)arg2;	// IMP=0x00100000002a0836
- (id)addToCacheAndReturnCssString:(id)arg1;	// IMP=0x0010000000467a16
@end
