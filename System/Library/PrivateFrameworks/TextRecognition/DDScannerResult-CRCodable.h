//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDetectorsCore/DDScannerResult.h>

@class NSString;

@interface DDScannerResult (CRCodable)
+ (id)ddScannerResultWithCRCodableDataRepresentation:(id)arg1;	// IMP=0x00100000000c5228
- (id)crCodableDataRepresentation;	// IMP=0x00100000000c51e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
