//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface NSSubrangeData : NSData
{
    struct _NSRange _range;	// 8 = 0x8
    NSData *_data;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x00000000003fbe8e
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003fbcbb
- (id)init;	// IMP=0x00000000003fbc4d
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003fba0b
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000003fb909
- (void)getBytes:(void *)arg1;	// IMP=0x00000000003fb808
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fb7fd
- (_Bool)_isCompact;	// IMP=0x00000000003fb7e0
- (const void *)bytes;	// IMP=0x00000000003fb7ad
- (unsigned long long)length;	// IMP=0x00000000003fb79b

@end
