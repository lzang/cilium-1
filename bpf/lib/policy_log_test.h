static inline bool policy_verdict_filter_allow(__u8 dir, __u32 filter)
{
	return ((filter & (1 << (dir-1))) > 0);
}

