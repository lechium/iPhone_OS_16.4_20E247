//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ArrayHash : NSObject
{
    NSArray *_array;	// 8 = 0x8
}

@property(readonly) NSArray *array; // @synthesize array=_array;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000409ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004092f
- (unsigned long long)hash;	// IMP=0x0010000000040814
- (void)dealloc;	// IMP=0x00100000000407d9
- (id)initWithArray:(id)arg1;	// IMP=0x0010000000040789

@end
