//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/BSInvalidatable-Protocol.h>

@class NSArray;
@protocol PBFPosterExtensionProviderDelegate;

@protocol PBFPosterExtensionProvider <BSInvalidatable>
@property(readonly, nonatomic) NSArray *knownPosterExtensions;
@property(nonatomic) __weak id <PBFPosterExtensionProviderDelegate> delegate;
- (void)start;
@end

