//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUImageRequesterChange : NSObject
{
    _Bool _imageDidChange;	// 8 = 0x8
    _Bool _imageIsFullQualityDidChange;	// 9 = 0x9
    _Bool _imageIsHigherQualityDidChange;	// 10 = 0xa
    _Bool _fullsizeImageDataDidChange;	// 11 = 0xb
    _Bool _fullsizeImageURLDidChange;	// 12 = 0xc
}

@property(nonatomic, setter=_setFullsizeImageURLDidChange:) _Bool fullsizeImageURLDidChange; // @synthesize fullsizeImageURLDidChange=_fullsizeImageURLDidChange;
@property(nonatomic, setter=_setFullsizeImageDataDidChange:) _Bool fullsizeImageDataDidChange; // @synthesize fullsizeImageDataDidChange=_fullsizeImageDataDidChange;
@property(nonatomic, setter=_setImageIsHigherQualityDidChange:) _Bool imageIsHigherQualityDidChange; // @synthesize imageIsHigherQualityDidChange=_imageIsHigherQualityDidChange;
@property(nonatomic, setter=_setImageIsFullQualityDidChange:) _Bool imageIsFullQualityDidChange; // @synthesize imageIsFullQualityDidChange=_imageIsFullQualityDidChange;
@property(nonatomic, setter=_setImageDidChange:) _Bool imageDidChange; // @synthesize imageDidChange=_imageDidChange;
@property(readonly, nonatomic) _Bool changed;

@end

