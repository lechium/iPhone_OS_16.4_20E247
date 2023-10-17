//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUImage-Protocol.h>

@class NURegion;

@protocol NUPurgeableImage <NUImage>
- (void)endAccessRegion:(NURegion *)arg1;
- (void)endAccess;
- (_Bool)beginAccessRegion:(NURegion *)arg1;
- (_Bool)beginAccess;
@end
