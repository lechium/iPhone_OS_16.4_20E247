//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQDPath : NSObject
{
    char *mPathString;	// 8 = 0x8
}

- (_Bool)horizontalFlip;	// IMP=0x000000000004f291
- (_Bool)verticalFlip;	// IMP=0x000000000004f289
- (_Bool)hasHorizontalFlip;	// IMP=0x000000000004f281
- (_Bool)hasVerticalFlip;	// IMP=0x000000000004f279
- (char *)pathStr;	// IMP=0x000000000004f233
- (struct CGPath *)createBezierPath;	// IMP=0x000000000004f22b
- (_Bool)isRect;	// IMP=0x000000000004f219
- (_Bool)isRectangular;	// IMP=0x000000000004f211
- (void)dealloc;	// IMP=0x000000000004f1ce

@end

