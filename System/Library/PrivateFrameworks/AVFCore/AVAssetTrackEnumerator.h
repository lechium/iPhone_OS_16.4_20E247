//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetTrackEnumerator : NSEnumerator
{
    NSString *_mediaType;	// 8 = 0x8
    NSArray *_mediaCharacteristics;	// 16 = 0x10
    NSEnumerator *_enumerator;	// 24 = 0x18
}

+ (id)trackEnumeratorWithAsset:(id)arg1;	// IMP=0x006000000002c762
- (id)nextObject;	// IMP=0x000000000002c972
- (void)setMediaCharacteristics:(id)arg1;	// IMP=0x000000000002c939
- (void)setMediaType:(id)arg1;	// IMP=0x000000000002c900
- (void)dealloc;	// IMP=0x000000000002c89a
- (id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2;	// IMP=0x000000000002c85b
- (id)initWithAsset:(id)arg1 mediaType:(id)arg2;	// IMP=0x000000000002c81c
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000002c791

@end

