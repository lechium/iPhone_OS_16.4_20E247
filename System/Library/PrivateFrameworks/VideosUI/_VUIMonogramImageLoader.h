//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _VUIMonogramImageLoader : NSObject
{
    NSDictionary *_generatorByType;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00100000000915a3
- (void).cxx_destruct;	// IMP=0x0000000000091dcc
- (id)_imageLoadError;	// IMP=0x0000000000091d9f
- (void)cancelLoad:(id)arg1;	// IMP=0x0000000000091cf4
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000091916
- (id)URLForObject:(id)arg1;	// IMP=0x000000000009187b
- (id)imageKeyForObject:(id)arg1;	// IMP=0x0000000000091781
- (id)init;	// IMP=0x00000000000915f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

