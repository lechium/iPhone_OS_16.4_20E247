//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (CACoderAdditions)
+ (id)CA_supportedClasses;	// IMP=0x00800000000237a2
- (_Bool)CA_decodeCGFloatArray:(double *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x001000000002368f
- (void)CA_encodeCGFloatArray:(const double *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0010000000023631
- (id)CA_decodeObjectForKey:(id)arg1;	// IMP=0x001000000002351b
- (void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(_Bool)arg3;	// IMP=0x00100000000233d2
@end
