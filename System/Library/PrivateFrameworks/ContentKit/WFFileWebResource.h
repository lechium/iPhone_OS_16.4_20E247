//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFWebResource.h"

@class WFFileRepresentation;

__attribute__((visibility("hidden")))
@interface WFFileWebResource : WFWebResource
{
    WFFileRepresentation *_file;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000088638
- (void).cxx_destruct;	// IMP=0x0000000000088625
@property(readonly, nonatomic) WFFileRepresentation *file; // @synthesize file=_file;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000088579
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000884ec
- (id)MIMEType;	// IMP=0x0000000000088472
- (id)data;	// IMP=0x0000000000088422
- (id)loadInWKWebView:(id)arg1;	// IMP=0x000000000008837e
- (id)initWithFile:(id)arg1;	// IMP=0x00000000000882fd

@end

