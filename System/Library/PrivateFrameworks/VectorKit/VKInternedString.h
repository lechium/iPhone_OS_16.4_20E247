//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface VKInternedString : NSString
{
    NSString *original;	// 8 = 0x8
}

+ (id)stringWithString:(id)arg1;	// IMP=0x006000000053205f
+ (void)initialize;	// IMP=0x0060000000531fc9
- (void).cxx_destruct;	// IMP=0x0000000000532321
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000532316
- (unsigned long long)hash;	// IMP=0x00000000005322f9
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000005322dc
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x00000000005322bf
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x00000000005322a2
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x0000000000532285
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x0000000000532268
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000053224b
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000053222e
- (unsigned long long)length;	// IMP=0x0000000000532211
- (void)dealloc;	// IMP=0x000000000053216c
- (id)initWithString:(id)arg1;	// IMP=0x000000000053203a

@end

