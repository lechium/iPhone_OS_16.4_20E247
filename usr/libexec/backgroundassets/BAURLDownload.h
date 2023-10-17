//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURLRequest;

@interface BAURLDownload
{
    NSURLRequest *_request;	// 16 = 0x10
    unsigned long long _amountDownloaded;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000012536
+ (_Bool)_cellularNetworkProhibitsDownloadUsingError:(id)arg1;	// IMP=0x0010000000004c51
- (void).cxx_destruct;	// IMP=0x0010000000012d22
@property unsigned long long amountDownloaded; // @synthesize amountDownloaded=_amountDownloaded;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
- (id)debugDescription;	// IMP=0x0010000000012c0d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000012b71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000012afa
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 applicationGroupIdentifier:(id)arg3 priority:(long long)arg4;	// IMP=0x0010000000012acf
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 applicationGroupIdentifier:(id)arg3;	// IMP=0x0010000000012aa4
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000129f6
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 essential:(_Bool)arg3 fileSize:(unsigned long long)arg4 applicationGroupIdentifier:(id)arg5 priority:(long long)arg6;	// IMP=0x00100000000125d1
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 fileSize:(unsigned long long)arg3 applicationGroupIdentifier:(id)arg4;	// IMP=0x00100000000125a6
- (id)init;	// IMP=0x001000000001253e
- (void)setBailError:(id)arg1;	// IMP=0x0000000000004e49
- (id)bailError;	// IMP=0x0010000000004e38
- (void)setStopRequest:(long long)arg1;	// IMP=0x0010000000004ddf
- (long long)stopRequest;	// IMP=0x0010000000004d9d
- (void)demoteToBackground;	// IMP=0x0010000000004b75
- (void)promoteToForeground;	// IMP=0x0010000000004a99
- (void)pauseDownload;	// IMP=0x00100000000049d3
- (void)cancelDownloadSilently;	// IMP=0x001000000000490d
- (void)cancelDownload;	// IMP=0x0010000000004847
- (void)_informDelegateOfFailedDownloadWithError:(id)arg1 silentFailure:(_Bool)arg2;	// IMP=0x0010000000004682
- (void)_informDelegateOfFailedDownloadWithError:(id)arg1;	// IMP=0x001000000000466e
- (void)_informDelegateOfPausedDownload;	// IMP=0x0010000000004513
- (void)_handleChallenge:(id)arg1 authenticationHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000042a0
- (void)_handleProgressWithBytesReceived:(unsigned long long)arg1 totalBytesRecieved:(unsigned long long)arg2 totalDownloadSize:(long long)arg3 resuming:(_Bool)arg4;	// IMP=0x0010000000003ec2
- (void)_handleDownloadCompletionWithFileLocation:(id)arg1 response:(id)arg2;	// IMP=0x0010000000003d14
- (void)_handleDownloadFailureWithError:(id)arg1 resumeData:(id)arg2 response:(id)arg3;	// IMP=0x001000000000390d
- (_Bool)startDownloadWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000021e5
- (void)dealloc;	// IMP=0x0010000000002168

@end
