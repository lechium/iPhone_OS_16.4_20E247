//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8Freeform26CRLImageFaceAnalyzerResult : NSObject
{
    MISSING_TYPE *interestingFacesRect;	// 8 = 0x8
    MISSING_TYPE *faceRectCombinations;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00400000006cb830
- (id)init;	// IMP=0x00100000006cb7d0
- (struct CGPoint)maskCenterForFacesWithImageSize:(struct CGSize)arg1 maskSize:(struct CGSize)arg2 defaultCenter:(struct CGPoint)arg3;	// IMP=0x00100000006cb700
- (id)initWithFaceRectValues:(id)arg1;	// IMP=0x00100000006cb1d0
@property(nonatomic, readonly) struct CGRect interestingFacesRect; // @synthesize interestingFacesRect;

@end

