//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUIImagePlaceholder : NSObject
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIColor *_borderColor;	// 16 = 0x10
    double _borderWidth;	// 24 = 0x18
    CDUnknownBlockType _cornerPathBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002fdfb6
@property(readonly, copy, nonatomic) CDUnknownBlockType cornerPathBlock; // @synthesize cornerPathBlock=_cornerPathBlock;
@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(readonly, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerPathBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000002fdeb4
- (id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerRadius:(double)arg4;	// IMP=0x00000000002fddc5

@end

