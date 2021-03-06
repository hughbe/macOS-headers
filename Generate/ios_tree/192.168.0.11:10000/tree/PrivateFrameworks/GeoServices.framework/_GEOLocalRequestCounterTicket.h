/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOLocalRequestCounterTicket : NSObject <GEORequestCounterTicket> {
    NSString * _appId;
    bool  _complete;
    bool  _logNetworkActivityOnly;
    NSObject<OS_nw_activity> * _nwActivity;
    _GEOLocalRequestCounterTicket * _parentTask;
    GEORequestCounterPersistence * _persistence;
    NSString * _requestId;
    unsigned long long  _signpostId;
    long long  _subTaskRecvBytes;
    long long  _subTaskXmitBytes;
    unsigned char  _subtasks;
    struct { 
        int type; 
        union { 
            int raw; 
            int tile; 
            int placeRequest; 
        } subtype; 
    }  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_requestCounterTicketForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 appId:(id)arg2 withParent:(id)arg3 logNetworkActivityOnly:(bool)arg4;
+ (id)requestCounterTicketForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 appId:(id)arg2;
+ (id)requestCounterTicketForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 appId:(id)arg2 persistence:(id)arg3;

- (void).cxx_destruct;
- (void)_subTask:(id)arg1 completedWithResult:(unsigned char)arg2 xmitBytes:(long long)arg3 recvBytes:(long long)arg4;
- (id)createSubtask:(bool)arg1;
- (id)description;
- (void)requestCompletedWithResult:(unsigned char)arg1 xmitBytes:(long long)arg2 recvBytes:(long long)arg3;
- (void)startingRequestWithTask:(id)arg1;

@end
