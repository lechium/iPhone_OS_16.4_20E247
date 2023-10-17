//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CIMetalWrapper : CIFilter
{
    NSMutableDictionary *_dict;	// 72 = 0x48
    NSString *inputFilterName;	// 80 = 0x50
}

@property(copy) NSString *inputFilterName; // @synthesize inputFilterName;
@property(retain) NSMutableDictionary *_dict; // @synthesize _dict;
- (id)outputImage;	// IMP=0x00000000000f702f
- (id)dummyImagesForImages:(id)arg1;	// IMP=0x00000000000f6ac7
- (id)attributes;	// IMP=0x00000000000f6a77
- (id)inputKeys;	// IMP=0x00000000000f6a27
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000f69b1
- (void)dealloc;	// IMP=0x00000000000f696a
- (id)init;	// IMP=0x00000000000f6906

@end
