//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface TransitDirectionsListImageItem
{
    NSDictionary *_images;	// 200 = 0xc8
    NSDictionary *_alternateImages;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0020000000972d5f
- (id)alternateImageSourceForStyle:(unsigned long long)arg1;	// IMP=0x0010000000972caf
- (id)imageSourceForStyle:(unsigned long long)arg1;	// IMP=0x0010000000972bff
- (id)initWithImages:(id)arg1 alternateImages:(id)arg2 instructions:(id)arg3;	// IMP=0x0010000000972b23
- (id)initWithImages:(id)arg1 instructions:(id)arg2;	// IMP=0x0010000000972b0c
- (id)initWithImage:(id)arg1 instructions:(id)arg2;	// IMP=0x0010000000972a5d

@end

