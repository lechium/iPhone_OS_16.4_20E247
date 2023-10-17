//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIFontDescriptor;

__attribute__((visibility("hidden")))
@interface ICFontCacheKey : NSObject
{
    int _traits;	// 8 = 0x8
    NSString *_fontName;	// 16 = 0x10
    double _pointSize;	// 24 = 0x18
    UIFontDescriptor *_fontDescriptor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000058924
@property(readonly, nonatomic) UIFontDescriptor *fontDescriptor; // @synthesize fontDescriptor=_fontDescriptor;
@property(readonly, nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
@property(readonly, nonatomic) int traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005872a
- (unsigned long long)hash;	// IMP=0x00000000000586ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000586a1
- (id)initWithFont:(id)arg1;	// IMP=0x00000000000585a0

@end
