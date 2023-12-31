//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PAMediaConversionServiceImagingUtilities : NSObject
{
}

+ (_Bool)_generatePosterFrameExportForVideoURL:(id)arg1 imageDestinationToAddToAndFinalize:(struct CGImageDestination *)arg2 maximumSize:(struct CGSize)arg3 error:(id *)arg4;	// IMP=0x0040000000017c98
+ (_Bool)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id *)arg2 maximumSize:(struct CGSize)arg3 outputFileType:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000017a96
+ (_Bool)generatePosterFrameExportForVideoURL:(id)arg1 destinationURL:(id)arg2 maximumSize:(struct CGSize)arg3 outputFileType:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000178b3
+ (id)imagePropertiesForFileAtURL:(id)arg1;	// IMP=0x001000000001777c
+ (id)imageDataForPassthroughConversionForSourceURL:(id)arg1 metadataPolicy:(id)arg2 outResultImageSize:(struct CGSize *)arg3;	// IMP=0x0010000000016f30

@end

