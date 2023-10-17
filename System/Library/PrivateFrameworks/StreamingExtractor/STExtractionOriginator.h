//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol STExtractionOriginatorProtocol;

__attribute__((visibility("hidden")))
@interface STExtractionOriginator : NSObject
{
    id <STExtractionOriginatorProtocol> _originator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002602
@property __weak id <STExtractionOriginatorProtocol> originator; // @synthesize originator=_originator;
- (void)remote_extractionEnteredPassthroughMode;	// IMP=0x0000000000002599
- (void)remote_extractionCompleteAtArchivePath:(id)arg1;	// IMP=0x000000000000252e
- (void)remote_setExtractionProgress:(double)arg1;	// IMP=0x00000000000024e2

@end
