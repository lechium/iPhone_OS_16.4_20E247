//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSData, PHAsset, PUGridRenderedStrip;

@protocol PUGridRenderedStripDataSource <NSObject>
- (NSData *)renderedStrip:(PUGridRenderedStrip *)arg1 imageDataForAsset:(PHAsset *)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (void)renderedStrip:(PUGridRenderedStrip *)arg1 enumerateAssetsForVisualSection:(long long)arg2 inVisualItemRange:(struct _NSRange)arg3 usingBlock:(void (^)(long long, PHAsset *, _Bool *))arg4;
@end

