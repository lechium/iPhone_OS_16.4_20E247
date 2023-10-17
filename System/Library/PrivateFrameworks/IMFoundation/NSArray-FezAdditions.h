//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSData, NSString;

@interface NSArray (FezAdditions)
- (id)__imMapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00300000000061b4
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1 filter:(CDUnknownBlockType)arg2;	// IMP=0x0030000000005ed7
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0030000000005c4e
- (id)__imArrayByFilteringWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00300000000059f1
- (void)__imForEach:(CDUnknownBlockType)arg1;	// IMP=0x003000000000591c
- (_Bool)containsObject:(id)arg1 matchingComparison:(SEL)arg2;	// IMP=0x00300000000058f1
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;	// IMP=0x0030000000005817
- (_Bool)containsObjectIdenticalTo:(id)arg1;	// IMP=0x00300000000057f4
- (id)__imFirstObject;	// IMP=0x00300000000057ad
- (id)_copyForEnumerating;	// IMP=0x0030000000005779
- (_Bool)_hasSameMembers:(id)arg1;	// IMP=0x00300000000056b4
- (id)__imDeepCopy;	// IMP=0x0030000000005635
- (_Bool)__imIsMutable;	// IMP=0x003000000000560c
- (id)__imSetFromArray;	// IMP=0x00300000000055c0
- (id)__IMStripPotentialTokenURIs;	// IMP=0x0030000000005537
@property(readonly, nonatomic) NSString *SHA256HexString;
@property(readonly, nonatomic) NSData *SHA256Data;
- (void)_SHA256Bytes:(char *)arg1;	// IMP=0x003000000001671b
@end
